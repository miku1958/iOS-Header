//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPUDataSourceInvalidationContext : NSObject
{
    BOOL _invalidateEverything;
    BOOL _invalidateDataSourceCounts;
}

@property (readonly, nonatomic) BOOL invalidateDataSourceCounts; // @synthesize invalidateDataSourceCounts=_invalidateDataSourceCounts;
@property (readonly, nonatomic) BOOL invalidateEverything; // @synthesize invalidateEverything=_invalidateEverything;

- (void)setInvalidateDataSourceCounts:(BOOL)arg1;
- (void)setInvalidateEverything:(BOOL)arg1;

@end

