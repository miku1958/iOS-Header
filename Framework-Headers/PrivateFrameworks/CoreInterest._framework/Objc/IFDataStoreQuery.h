//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IFDataStoreQuery : NSObject
{
    NSString *_query;
    CDUnknownBlockType _preparation;
    CDUnknownBlockType _step;
    CDUnknownBlockType _error;
}

@property (copy, nonatomic) CDUnknownBlockType error; // @synthesize error=_error;
@property (copy, nonatomic) CDUnknownBlockType preparation; // @synthesize preparation=_preparation;
@property (copy, nonatomic) NSString *query; // @synthesize query=_query;
@property (copy, nonatomic) CDUnknownBlockType step; // @synthesize step=_step;

+ (id)query;
- (void).cxx_destruct;

@end

