//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGCuratedChangeNotificationsBaseListener.h>

@protocol NSObject;

@interface SGCuratedChangeNotificationsAddressBookListener : SGCuratedChangeNotificationsBaseListener
{
    id<NSObject> _notificationCenterToken;
}

- (void).cxx_destruct;
- (void)startListening;
- (void)stopListening;

@end

