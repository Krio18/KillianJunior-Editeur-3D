#include "UI/MaterialPanel/MaterialPanel.hpp"

MaterialPanel::MaterialPanel(ComponentRegistry& componentRegistry, SelectionSystem& selectionSystem)
    : _componentRegistry(componentRegistry), _selectionSystem(selectionSystem)
{
}

void MaterialPanel::render()
{
    EntityID selectedEntity = this->_selectionSystem.getSelectedEntity();
    Renderable* renderable = _componentRegistry.getComponent<Renderable>(selectedEntity);
    if (this->_selectionSystem.getSelectedEntity() == INVALID_ENTITY)
        return;

    if (this->_renderable) {
        ImGui::Checkbox("Visible", &this->_renderable->visible);

        if (this->_renderable->material) {
            ImGui::Text("Material:");

            if (this->_renderable->material->shader) {
                // std::string texName = _resource->getShaderPath(this->_renderable->material->shader);
                ImGui::Text(" - Shader: Set");
            }
            else
                ImGui::Text(" - Shader: None");

            if (this->_renderable->material->texture) {
                // std::string texName = _resource->getTexturePath(this->_renderable->material->texture);
                ofTexture* tex = this->_renderable->material->texture;
                ImGui::Text(" - Texture: Set");
                ImVec2 thumbSize = ImVec2(24, 24);
                GLuint texID = tex->getTextureData().textureID;
                ImGui::Image((ImTextureID)(uintptr_t)texID, thumbSize, ImVec2(0,1), ImVec2(1,0));
            }
            else
                ImGui::Text(" - Texture: None");

            ImGui::Separator();

            ImGui::Checkbox("Visible", &this->_renderable->visible);
        }
    }
}
