//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKLocalSearch, NSString;

@interface CalGeocoder : NSObject
{
    NSString *_locationString;
    CDUnknownBlockType _completionBlock;
    MKLocalSearch *_search;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property (strong, nonatomic) MKLocalSearch *search; // @synthesize search=_search;

+ (void)geocodeLocationString:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (id)initWithLocationString:(id)arg1 andCompletionBlock:(CDUnknownBlockType)arg2;
- (void)startGeocoding;

@end

