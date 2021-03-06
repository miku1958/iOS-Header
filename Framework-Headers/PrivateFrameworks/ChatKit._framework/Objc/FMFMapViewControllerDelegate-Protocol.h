//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CNContact, FMFHandle, FMFMapViewController, UIView;
@protocol MKAnnotation;

@protocol FMFMapViewControllerDelegate <NSObject>

@optional
- (CNContact *)annotationContactForHandle:(FMFHandle *)arg1;
- (BOOL)canSelectAnnotation:(id<MKAnnotation>)arg1;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didDeselectHandle:(FMFHandle *)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didReceiveLocation:(id<MKAnnotation>)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didSelectHandle:(FMFHandle *)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (UIView *)titleViewForSelectedHandle;
@end

