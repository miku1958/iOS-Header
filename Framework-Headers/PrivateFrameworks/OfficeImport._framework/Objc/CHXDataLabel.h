//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXDataLabel : NSObject
{
}

+ (id)chdDataLabelFromXmlDataLabelElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdDataLabelPositionFromXmlDataLabelElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (Class)chdDataValuePropertiesClassWithState:(id)arg1;
+ (void)readFrom:(struct _xmlNode *)arg1 dataValuePropertiesCollection:(id)arg2 state:(id)arg3;
+ (id)stringFromDataLabelPosition:(int)arg1;

@end

