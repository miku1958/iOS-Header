//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICPushNotificationsResponse, ICStoreRequestContext, NSString;

@interface ICPushNotificationsDisableTypesRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    NSString *_notificationType;
    ICPushNotificationsResponse *_response;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 notificationType:(id)arg2;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;

@end

