//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject
{
}

@property (nonatomic) BOOL isLocalStorage;
@property (copy, nonatomic) NSString *securityOrigin;

- (id)initWithSecurityOrigin:(id)arg1 isLocalStorage:(BOOL)arg2;

@end

