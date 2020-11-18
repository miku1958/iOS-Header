//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNGreedyClusteringReadOnly.h>

#import <Vision/VNClusteringWritable-Protocol.h>

__attribute__((visibility("hidden")))
@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable>
{
    struct shared_ptr<vision::mod::FaceClustering> m_ClusteringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_cancellableUpdate:(struct ImageDescriptorBufferAbstract *)arg1 facesToMove:(vector_22dfb71c *)arg2 requestRevision:(unsigned long long)arg3;
- (id)getClustersWithOptions:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
