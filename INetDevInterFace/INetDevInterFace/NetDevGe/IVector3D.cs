using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace INetDevInterFace.NetDevGe
{
    /// <summary>
    /// 向量接口，用于统一各个平台的向量操作
    /// </summary>
    interface IVector3D
    {
        double Y { get; }
        double X { get; }
        double Z { get; }
        double Length { get; }
    }
}
