//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class CKDatabase;

@interface CRKCloudOperation : CATOperation
{
    CKDatabase *_database;
}

@property (readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;

+ (id)new;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (BOOL)isAsynchronous;

@end
