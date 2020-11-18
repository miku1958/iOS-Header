//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import <CoverSheet/CSPresentationProviding-Protocol.h>

@class NSArray, NSString;
@protocol UICoordinateSpace;

@interface CSCoverSheetViewBase : SBFTouchPassThroughView <CSPresentationProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> presentationCoordinateSpace;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly) Class superclass;

- (BOOL)isCoverSheetView;

@end
