using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace INetDevInterFace.Factory
{
    /// <summary>
    /// 类工厂管理器
    /// </summary>
    public class NetDevFactoryMananger
    {
        private IFactory mFactory = null;

        /// <summary>
        /// 设置工厂
        /// </summary>
        public IFactory Factory
        {
            set
            {
                Factory = value;
            }
            get
            {
                return mFactory;
            }
        }
    }
}
