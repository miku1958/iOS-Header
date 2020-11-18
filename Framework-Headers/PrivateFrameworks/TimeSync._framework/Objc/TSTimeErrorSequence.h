//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSTimeErrorSequence : NSObject
{
    NSArray *_timeErrors;
}

@property (readonly, copy, nonatomic) NSArray *timeErrors; // @synthesize timeErrors=_timeErrors;

+ (id)timeErrorSequenceWithTimestamps:(unsigned long long *)arg1 timeError:(long long *)arg2 count:(long long)arg3;
- (void)dealloc;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)arg1;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(BOOL)arg5;
- (id)initWithTimeErrors:(id)arg1;

@end

