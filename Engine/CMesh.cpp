#include "CMesh.h"
CMesh::CMesh()
{

}
void CMesh::SetVertices(const std::vector<SVector3>& vertices)
{
    m_vertices=vertices;
}
void CMesh::SetUVS(const std::vector <SVector2>& uvs)
{
    m_uvs=uvs;
}
void CMesh::SetNormals(const std::vector<SVector3>& normals)
{
    m_normals=normals;
}
void CMesh::SetIndices(const std::vector<unsigned int>& indices)
{
    m_indices=indices;
}
void CMesh::GetVertices(std::vector<SVector3>& vertices)
{
	vertices = m_vertices;
}
void CMesh::GetUVS(std::vector<SVector2>& uvs)
{
	uvs = m_uvs;
}
void CMesh::GetNormals(std::vector<SVector3>& normals)
{
	normals = m_normals;
}
void CMesh::GetIndices(std::vector<unsigned int>& indices)
{
	indices = m_indices;
}
