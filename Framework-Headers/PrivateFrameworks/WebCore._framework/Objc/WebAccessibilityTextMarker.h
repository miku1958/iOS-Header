//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityTextMarker : NSObject
{
    struct AXObjectCache *_cache;
    struct TextMarkerData _textMarkerData;
}

+ (id)startOrEndTextMarkerForRange:(RefPtr_59db400e)arg1 isStart:(BOOL)arg2 cache:(struct AXObjectCache *)arg3;
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset *)arg1 cache:(struct AXObjectCache *)arg2;
+ (id)textMarkerWithVisiblePosition:(struct VisiblePosition *)arg1 cache:(struct AXObjectCache *)arg2;
- (id).cxx_construct;
- (struct AccessibilityObject *)accessibilityObject;
- (struct CharacterOffset)characterOffset;
- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1 accessibilityObject:(struct WebAccessibilityObjectWrapper *)arg2;
- (id)initWithData:(id)arg1 cache:(struct AXObjectCache *)arg2;
- (id)initWithTextMarker:(struct TextMarkerData *)arg1 cache:(struct AXObjectCache *)arg2;
- (BOOL)isIgnored;
- (struct VisiblePosition)visiblePosition;

@end

