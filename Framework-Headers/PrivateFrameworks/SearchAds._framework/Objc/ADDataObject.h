//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

@interface ADDataObject : NSObject
{
    NSDictionary *_iAdData;
    NSError *_error;
}

@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) NSDictionary *iAdData; // @synthesize iAdData=_iAdData;

- (void).cxx_destruct;
- (id)initWith:(id)arg1 andError:(id)arg2;

@end
