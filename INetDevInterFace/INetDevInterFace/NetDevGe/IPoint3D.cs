using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace INetDevInterFace.NetDevGe
{
    /// <summary>
    /// 点接口，用于统一各个平台的点操作
    /// </summary>
    interface IPoint3D
    {
        double Z { get; }
        double Y { get; }
        double X { get; }
    }
}
