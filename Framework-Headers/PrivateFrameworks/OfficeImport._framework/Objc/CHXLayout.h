//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXLayout : NSObject
{
}

+ (struct CGRect)boundsRectFromXmlManualLayoutElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)orientedBoundsFromLayoutElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFrom:(struct _xmlNode *)arg1 graphicProperties:(id)arg2 state:(id)arg3;
+ (id)stringFromLayoutMode:(int)arg1;

@end
