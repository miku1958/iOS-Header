//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthExperienceUI/NSObject-Protocol.h>

@class WDFavoriteDisplayTypesController;

@protocol WDFavoriteDisplayTypesControllerObserver <NSObject>

@optional
- (void)favoriteDisplayTypesControllerDidFail:(WDFavoriteDisplayTypesController *)arg1;
- (void)favoriteDisplayTypesControllerDidSuccessfullyPersist:(WDFavoriteDisplayTypesController *)arg1;
- (void)favoriteDisplayTypesControllerDidUpdate:(WDFavoriteDisplayTypesController *)arg1;
- (void)favoriteDisplayTypesControllerReady:(WDFavoriteDisplayTypesController *)arg1;
@end
