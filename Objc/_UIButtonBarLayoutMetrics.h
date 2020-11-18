//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/_UIButtonBarLayoutMetricsData-Protocol.h>

@class NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

__attribute__((visibility("hidden")))
@interface _UIButtonBarLayoutMetrics : NSObject <_UIButtonBarLayoutMetricsData, NSCopying>
{
    BOOL _locked;
    NSLayoutDimension *_verticalSizeGuide;
    NSLayoutDimension *_minimumSpaceGuide;
    NSLayoutDimension *_flexibleSpaceGuide;
    NSLayoutYAxisAnchor *_popoverGuideTopAnchor;
    NSLayoutDimension *_groupSizeGuide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSLayoutDimension *flexibleSpaceGuide; // @synthesize flexibleSpaceGuide=_flexibleSpaceGuide;
@property (strong, nonatomic) NSLayoutDimension *groupSizeGuide; // @synthesize groupSizeGuide=_groupSizeGuide;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSLayoutDimension *minimumSpaceGuide; // @synthesize minimumSpaceGuide=_minimumSpaceGuide;
@property (strong, nonatomic) NSLayoutYAxisAnchor *popoverGuideTopAnchor; // @synthesize popoverGuideTopAnchor=_popoverGuideTopAnchor;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSLayoutDimension *verticalSizeGuide; // @synthesize verticalSizeGuide=_verticalSizeGuide;

- (void).cxx_destruct;
- (id)_copyWithModifications:(CDUnknownBlockType)arg1;
- (id)_upcastIfReadOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

