//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXAnimation : NSObject
{
}

+ (id)chartBuildStepMap;
+ (id)chartTypeMap;
+ (id)newShapeTarget:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)newTarget:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)presetClassMap;
+ (void)readAnimAudioElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimCmdElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimEffectElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimMotionElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimParallelElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimRotationElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimScaleElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimSequentialElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimSetElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (id)readAnimVariant:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readAnimVideoElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimationFromTimingXmlNode:(struct _xmlNode *)arg1 tgtAnimation:(id)arg2 drawingState:(id)arg3;
+ (void)readChartBuildStep:(id)arg1 chartTarget:(id)arg2;
+ (int)readChartBuildType:(id)arg1;
+ (void)readChartType:(id)arg1 oleChartTarget:(id)arg2;
+ (void)readChildTimeNodeList:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readCommonBehaviorData:(struct _xmlNode *)arg1 tgtCommonBehaviorData:(id)arg2 drawingState:(id)arg3;
+ (void)readCommonMediaNodeData:(struct _xmlNode *)arg1 commonMediaData:(id)arg2 drawingState:(id)arg3;
+ (void)readCommonTimeNodeData:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readCondition:(struct _xmlNode *)arg1 timeCondition:(id)arg2 drawingState:(id)arg3;
+ (void)readConditionList:(struct _xmlNode *)arg1 arrayOfConditions:(id)arg2 drawingState:(id)arg3;
+ (id)readGraphicBuild:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readIterate:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (id)readOleChartBuild:(struct _xmlNode *)arg1;
+ (BOOL)readOptionalStringAttribute:(id)arg1 fromNode:(struct _xmlNode *)arg2 attributeMap:(id)arg3 toPDDomValue:(unsigned long long *)arg4;
+ (id)readParagraphBuild:(struct _xmlNode *)arg1;
+ (void)readPointFromNode:(struct _xmlNode *)arg1 tgtPoint:(struct CGPoint *)arg2;
+ (void)readPresetClass:(id)arg1 commonTimeNodeData:(id)arg2;
+ (void)readRestartType:(id)arg1 commonTimeNodeData:(id)arg2;
+ (void)readStConditionList:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readTimeNodeType:(id)arg1 commonTimeNodeData:(id)arg2;
+ (void)readTriggerEvent:(id)arg1 timeCondition:(id)arg2;
+ (id)restartTypeMap;
+ (id)sequentialNextActionMap;
+ (id)sequentialPreviousActionMap;
+ (id)timeNodeFillTypeMap;
+ (id)timeNodeTypeMap;
+ (id)triggerEventMap;
+ (void)writeAnimationFromSlideBase:(id)arg1 to:(id)arg2 state:(id)arg3;

@end
