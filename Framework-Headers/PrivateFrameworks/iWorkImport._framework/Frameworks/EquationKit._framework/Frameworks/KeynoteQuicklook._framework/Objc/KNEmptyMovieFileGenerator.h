//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject
{
    double _duration;
    NSURL *_generatedFileURL;
}

@property (readonly, nonatomic) NSURL *generatedFileURL; // @synthesize generatedFileURL=_generatedFileURL;

- (void).cxx_destruct;
- (void)generateFileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithGeneratedFileURL:(id)arg1 duration:(double)arg2;

@end
