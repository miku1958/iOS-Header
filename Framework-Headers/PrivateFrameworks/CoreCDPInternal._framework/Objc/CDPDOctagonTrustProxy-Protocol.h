//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, NSArray, NSDictionary;

@protocol CDPDOctagonTrustProxy <NSObject>

@property (strong, nonatomic) CDPContext *cdpContext;

- (NSArray *)fetchEscrowRecords:(NSDictionary *)arg1 forceFetch:(BOOL)arg2 error:(id *)arg3;
- (id)initWithContext:(CDPContext *)arg1;
@end
