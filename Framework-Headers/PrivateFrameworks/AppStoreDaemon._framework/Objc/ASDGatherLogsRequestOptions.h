//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface ASDGatherLogsRequestOptions : NSObject <NSCopying>
{
    BOOL _verbose;
    NSString *_fileName;
    NSArray *_urlFilters;
}

@property (copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property (copy, nonatomic) NSArray *urlFilters; // @synthesize urlFilters=_urlFilters;
@property (nonatomic) BOOL verbose; // @synthesize verbose=_verbose;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

