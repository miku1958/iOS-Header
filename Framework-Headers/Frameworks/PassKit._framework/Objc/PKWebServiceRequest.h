//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PKWebServiceRequest : NSObject
{
}

+ (id)_HTTPBodyWithDictionary:(id)arg1;
+ (id)authHeaderWithAccount:(id)arg1;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 account:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1;
- (id)_murlRequestWithURL:(id)arg1 account:(id)arg2;

@end
