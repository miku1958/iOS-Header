//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFRangedDataFilter : MFBaseFilterDataConsumer
{
    struct _NSRange _range;
    unsigned long long _consumedLength;
}

@property (nonatomic) struct _NSRange range; // @synthesize range=_range;

+ (id)rangedFilterWithConsumer:(id)arg1 range:(struct _NSRange)arg2;
+ (id)rangedFilterWithConsumers:(id)arg1 range:(struct _NSRange)arg2;
- (long long)appendData:(id)arg1;

@end
