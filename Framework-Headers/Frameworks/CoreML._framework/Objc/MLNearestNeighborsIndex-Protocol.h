//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol MLNearestNeighborsIndex
- (unsigned long long)dataPointCount;
- (vector_392775c5)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const vector_7584168e *)arg2;
- (BOOL)updateWithData:(const vector_7584168e *)arg1 error:(id *)arg2;
@end

