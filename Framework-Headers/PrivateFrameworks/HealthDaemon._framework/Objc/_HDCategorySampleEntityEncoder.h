//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDEncoder.h>

@interface _HDCategorySampleEntityEncoder : HDEncoder
{
    HDEncoder *_sampleEncoder;
}

- (void).cxx_destruct;
- (id)codableRepresentationOfEntity:(id)arg1 collection:(id)arg2 row:(struct HDSQLiteRow *)arg3;
- (void)finish;
- (id)initForHealthDaemon:(id)arg1 database:(id)arg2;
- (id)orderedProperties;

@end

