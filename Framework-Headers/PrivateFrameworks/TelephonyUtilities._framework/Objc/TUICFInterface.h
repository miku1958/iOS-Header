//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TUICFInterface : NSObject
{
}

+ (BOOL)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(BOOL)arg3;
+ (void)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (int)serviceForServiceIdentifier:(id)arg1;
+ (struct __CFString *)serviceIdentifierForService:(int)arg1 isRelay:(BOOL)arg2;
+ (BOOL)serviceIdentifierIsRelay:(id)arg1;

@end
