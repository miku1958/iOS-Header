//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXAxis : NSObject
{
}

+ (id)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdAxisPositionFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdCrossesFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdTickLabelPositionFromXmlTickLabelPositionElement:(struct _xmlNode *)arg1;
+ (int)chdTickMarkFromXmlTickMarkElement:(struct _xmlNode *)arg1;
+ (Class)chxAxisClassWithChdAxis:(id)arg1;
+ (Class)chxAxisClassWithXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readScalingFromXmlScalingElement:(struct _xmlNode *)arg1 axis:(id)arg2 state:(id)arg3;

@end

