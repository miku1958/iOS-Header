//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/NSObject-Protocol.h>

@class NSCharacterSet, NSLocale;

@protocol CHRecognizing <NSObject>

@property (strong, nonatomic) NSCharacterSet *activeCharacterSet;
@property (nonatomic) int contentType;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic) struct CGSize minimumDrawingSize;
@property (readonly, nonatomic) int recognitionMode;
@property (nonatomic) BOOL shouldEnableCachingIfAvailable;

- (id)initWithMode:(int)arg1 locale:(NSLocale *)arg2;
@end
