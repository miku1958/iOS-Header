//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RMHTTPLog : NSObject
{
}

+ (id)_logDirectoryForEnrollmentToken:(id)arg1;
+ (void)_writeRequestLogToURL:(id)arg1 request:(id)arg2 response:(id)arg3 responseData:(id)arg4 responseError:(id)arg5;
+ (void)logHTTPDetailsForEnrollmentToken:(id)arg1 request:(id)arg2 response:(id)arg3 responseData:(id)arg4 responseError:(id)arg5;
+ (void)logHTTPDetailsForEnrollmentToken:(id)arg1 request:(id)arg2 response:(id)arg3 responseURL:(id)arg4 responseError:(id)arg5;

@end
