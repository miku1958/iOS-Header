//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray;

@interface PQLQueryBuilder : NSObject
{
    NSMutableArray *_parameters;
    unsigned char _spec[1000];
    short _specLength;
    NSError *lastError;
}

@property (strong, nonatomic) NSError *lastError; // @synthesize lastError;

- (void).cxx_destruct;
- (id)bindBooleanParameter:(BOOL)arg1;
- (id)bindCharParameter:(BOOL)arg1;
- (id)bindDoubleParameter:(double)arg1;
- (id)bindIntegerParameter:(int)arg1;
- (id)bindLongParameter:(long long)arg1;
- (id)bindObjectParameter:(id)arg1;
- (id)bindParameter:(id)arg1 spec:(unsigned char)arg2;
- (id)bindShortParameter:(short)arg1;
- (id)bindStringParameter:(id)arg1;
- (id)bindUnsignedCharParameter:(unsigned char)arg1;
- (id)bindUnsignedIntegerParameter:(unsigned int)arg1;
- (id)bindUnsignedLongParameter:(unsigned long long)arg1;
- (id)bindUnsignedShortParameter:(unsigned short)arg1;
- (id)init;

@end

