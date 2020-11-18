//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class DASearchQuery;

@interface ASSearchTask : ASTask
{
    int _numDownloadedElements;
    DASearchQuery *_query;
}

@property (nonatomic) int numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property (strong, nonatomic) DASearchQuery *query; // @synthesize query=_query;

- (void).cxx_destruct;
- (int)commandCode;
- (id)description;
- (id)initWithQuery:(id)arg1;
- (long long)taskStatusForExchangeStatus:(int)arg1;

@end
