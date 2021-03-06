//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSMapTable, NSString;
@protocol SBReusableViewMapDelegate;

@interface SBReusableViewMap : NSObject <BSDescriptionProviding>
{
    NSMapTable *_recycledViewsByClass;
    BOOL _invalidated;
    id<SBReusableViewMapDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBReusableViewMapDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long recycledViewCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long viewRecyclingCount;

- (void).cxx_destruct;
- (void)addRecycledViewsOfClass:(Class)arg1 upToCount:(unsigned long long)arg2;
- (void)dealloc;
- (id)dequeueReusableViewOfClass:(Class)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateRecycledViewsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (BOOL)isViewRecycled:(id)arg1;
- (id)newViewOfClass:(Class)arg1;
- (void)purgeAllViews;
- (void)purgeViewsForClass:(Class)arg1;
- (void)recycleView:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)viewOfClass:(Class)arg1;

@end

