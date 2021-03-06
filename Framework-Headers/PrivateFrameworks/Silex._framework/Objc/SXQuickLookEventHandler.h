//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookEventHandler-Protocol.h>
#import <Silex/SXQuickLookInteractorDelegate-Protocol.h>

@class NSString;
@protocol SXQuickLookEventHandlerDelegate, SXQuickLookInteractor, SXQuickLookRouter;

@interface SXQuickLookEventHandler : NSObject <SXQuickLookInteractorDelegate, SXQuickLookEventHandler>
{
    id<SXQuickLookEventHandlerDelegate> delegate;
    id<SXQuickLookInteractor> _interactor;
    id<SXQuickLookRouter> _router;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXQuickLookEventHandlerDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXQuickLookInteractor> interactor; // @synthesize interactor=_interactor;
@property (readonly, nonatomic) id<SXQuickLookRouter> router; // @synthesize router=_router;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didLoadThumbnail:(id)arg1;
- (void)didTapThumbnailView:(id)arg1;
- (void)failedToLoadThumbnail;
- (id)initWithInteractor:(id)arg1 router:(id)arg2;
- (void)requestThumbnailWithSize:(struct CGSize)arg1;

@end

