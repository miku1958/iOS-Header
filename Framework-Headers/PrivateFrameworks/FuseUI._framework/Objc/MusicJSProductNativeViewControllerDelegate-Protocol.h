//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class IKAppDocument, MusicJSProductNativeViewController, NSArray, NSDictionary;

@protocol MusicJSProductNativeViewControllerDelegate <NSObject>
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 presentShareDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setProductEntityValueProviderData:(NSDictionary *)arg2;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setRelatedContentDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setReportingInformation:(NSDictionary *)arg2;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setTracklistItems:(NSArray *)arg2;
@end

