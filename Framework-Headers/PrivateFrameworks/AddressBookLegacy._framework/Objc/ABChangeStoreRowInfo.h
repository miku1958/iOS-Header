//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABChangeStoreRowInfo : NSObject
{
    int _consumedSequenceNumber;
    NSString *_clientIdentifier;
}

@property (strong, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (nonatomic) int consumedSequenceNumber; // @synthesize consumedSequenceNumber=_consumedSequenceNumber;

- (void)dealloc;
- (id)description;

@end

