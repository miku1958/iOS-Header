//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding>
{
    BOOL __wantsFullScreen;
    BOOL __wantsBottomAttachedInCompactHeight;
    BOOL __widthFollowsPreferredContentSizeWhenBottomAttached;
    BOOL __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
    long long __mode;
    NSArray *__detents;
    long long __indexOfCurrentDetent;
    long long __indexOfLastUndimmedDetent;
}

@property (copy, nonatomic, setter=_setDetents:) NSArray *_detents; // @synthesize _detents=__detents;
@property (nonatomic, setter=_setIndexOfCurrentDetent:) long long _indexOfCurrentDetent; // @synthesize _indexOfCurrentDetent=__indexOfCurrentDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetent:) long long _indexOfLastUndimmedDetent; // @synthesize _indexOfLastUndimmedDetent=__indexOfLastUndimmedDetent;
@property (nonatomic, setter=_setMode:) long long _mode; // @synthesize _mode=__mode;
@property (nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge; // @synthesize _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge=__prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
@property (nonatomic, setter=_setWantsBottomAttachedInCompactHeight:) BOOL _wantsBottomAttachedInCompactHeight; // @synthesize _wantsBottomAttachedInCompactHeight=__wantsBottomAttachedInCompactHeight;
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen; // @synthesize _wantsFullScreen=__wantsFullScreen;
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached; // @synthesize _widthFollowsPreferredContentSizeWhenBottomAttached=__widthFollowsPreferredContentSizeWhenBottomAttached;

+ (id)_fullScreenConfiguration;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
