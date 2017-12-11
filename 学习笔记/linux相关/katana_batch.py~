katana batch render

import NodegraphAPI
from Katana import KatanaFile
from Katana import RenderManager
def messageHandler( sequenceID, message ):
  print message
RenderNode = NodegraphAPI.GetNode('Render') # Getting Render node
renderSettings = RenderManager.RenderingSettings()
renderSettings.frame=1
renderSettings.mode=RenderManager.RenderModes.DISK_RENDER
renderSettings.asynchRenderMessageCB=messageHandler
renderSettings.asynch=False
for frame in range(1,100):
    print '-' * 80
    print '\nRendering Node "%s" frame %s...' % (RenderNode.getName(), frame)
    renderSettings.frame = frame
    RenderManager.StartRender('diskRender', node=RenderNode, settings=renderSettings)
