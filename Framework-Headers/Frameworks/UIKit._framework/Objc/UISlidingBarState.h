//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UISlidingBarConfiguration;

@interface UISlidingBarState : NSObject <NSCopying>
{
    BOOL _trailingOverlapsMain;
    BOOL __treatLeadingHiddenAsOverlaps;
    double _leadingWidth;
    double _trailingWidth;
    double _bounce;
    double _leadingDragOffset;
    double _trailingDragOffset;
    UISlidingBarConfiguration *_configuration;
    double __leadingOverlayWidth;
    double __keyboardAdjustment;
    long long __collapsedState;
}

@property (nonatomic, setter=_setCollapsedState:) long long _collapsedState; // @synthesize _collapsedState=__collapsedState;
@property (nonatomic) double _keyboardAdjustment; // @synthesize _keyboardAdjustment=__keyboardAdjustment;
@property (nonatomic, setter=_setLeadingOverlayWidth:) double _leadingOverlayWidth; // @synthesize _leadingOverlayWidth=__leadingOverlayWidth;
@property (nonatomic, setter=_setTreatLeadingHiddenAsOverlaps:) BOOL _treatLeadingHiddenAsOverlaps; // @synthesize _treatLeadingHiddenAsOverlaps=__treatLeadingHiddenAsOverlaps;
@property (nonatomic) double bounce; // @synthesize bounce=_bounce;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (strong, nonatomic) UISlidingBarConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) BOOL isLeadingVisible;
@property (readonly, nonatomic) BOOL isTrailingVisible;
@property (nonatomic) double leadingDragOffset; // @synthesize leadingDragOffset=_leadingDragOffset;
@property (readonly, nonatomic) BOOL leadingOverlapsMain;
@property (nonatomic) double leadingWidth; // @synthesize leadingWidth=_leadingWidth;
@property (nonatomic) double trailingDragOffset; // @synthesize trailingDragOffset=_trailingDragOffset;
@property (nonatomic) BOOL trailingOverlapsMain; // @synthesize trailingOverlapsMain=_trailingOverlapsMain;
@property (nonatomic) double trailingWidth; // @synthesize trailingWidth=_trailingWidth;

- (void).cxx_destruct;
- (double)_absoluteDistanceFromRequest:(id)arg1;
- (double)_distanceFromRequest:(id)arg1;
- (id)_interactiveStateRequest;
- (BOOL)_leadingEntirelyOverlapsMain;
- (BOOL)_leadingShouldUseSlidingBars;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesRequest:(id)arg1;
- (id)stateRequest;

@end

