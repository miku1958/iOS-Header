//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class ASCOfferMetadata, ASCOfferPresenterViewState, ASCOfferTheme, NSString;

@protocol ASCOfferPresenterView <NSObject>
- (void)beginOfferModalStateWithCancelBlock:(void (^)(void))arg1;
- (void)endOfferModalState;
- (ASCOfferPresenterViewState *)saveOfferState;
- (void)setOfferEnabled:(BOOL)arg1;
- (void)setOfferInteractive:(BOOL)arg1;
- (void)setOfferMetadata:(ASCOfferMetadata *)arg1;
- (void)setOfferStatus:(NSString *)arg1;
- (void)setOfferTheme:(ASCOfferTheme *)arg1;
@end

