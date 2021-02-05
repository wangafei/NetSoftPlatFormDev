using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using INetDevInterFace.NetDevGe;

namespace INetDevInterFace.Factory
{
    /// <summary>
    /// 创建各个实体的工厂类
    /// </summary>
    public interface IFactory
    {
        IPoint3D CreatePt();
        IVector3D CreateVector3D();
    }
}
