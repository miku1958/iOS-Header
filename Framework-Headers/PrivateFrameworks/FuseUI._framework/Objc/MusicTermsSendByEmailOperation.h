//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSError, NSString;

@interface MusicTermsSendByEmailOperation : SSVComplexOperation
{
    NSError *_error;
    NSString *_emailAddress;
}

@property (readonly, copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (readonly) NSError *error;

- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)arg1;
- (void)main;

@end
