//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSMapTable, NSString;

@interface SBIconListViewIconVisibilityInfo : NSObject <BSDescriptionProviding, NSCopying>
{
    NSMapTable *_visibleRects;
    BOOL _normalized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isNormalized) BOOL normalized; // @synthesize normalized=_normalized;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSMapTable *visibleIconRects;

- (void).cxx_destruct;
- (void)addValuesFromIconVisibilityInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateVisibleIconsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setVisibleRect:(struct CGRect)arg1 forIcon:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (struct CGRect)visibleRectForIcon:(id)arg1;

@end

