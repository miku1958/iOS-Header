//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface MusicSocialOperationResponse : NSObject
{
    BOOL _serverSuccess;
    id _responseData;
    NSError *_error;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) id responseData; // @synthesize responseData=_responseData;
@property (nonatomic) BOOL serverSuccess; // @synthesize serverSuccess=_serverSuccess;

- (void).cxx_destruct;

@end

