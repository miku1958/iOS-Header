//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest;

@interface ICSetParentalControlRequestOperation : ICRequestOperation
{
    BOOL _allowsExplicitContent;
    BOOL _automatic;
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
}

@property (nonatomic) BOOL allowsExplicitContent; // @synthesize allowsExplicitContent=_allowsExplicitContent;
@property (nonatomic, getter=isAutomatic) BOOL automatic; // @synthesize automatic=_automatic;
@property (strong, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property (strong, nonatomic) ICStoreURLRequest *storeURLRequest; // @synthesize storeURLRequest=_storeURLRequest;

- (void).cxx_destruct;
- (void)_buildAndSendRequestForURL:(id)arg1;
- (void)_getURLFromBagAndSendRequest;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 allowsExplicitContent:(BOOL)arg2 isAutomatic:(BOOL)arg3;

@end

