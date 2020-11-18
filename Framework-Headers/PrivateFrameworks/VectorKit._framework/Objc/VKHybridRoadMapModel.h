//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKRoadMapModel.h>

__attribute__((visibility("hidden")))
@interface VKHybridRoadMapModel : VKRoadMapModel
{
    struct unique_ptr<md::OffscreenQueue, std::__1::default_delete<md::OffscreenQueue>> _offscreenQueue;
    float _roadAlpha;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3 dispatchQueue:(id)arg4;
- (void)lockCommandBuffers:(struct RenderQueue *)arg1;
- (void)unLockCommandBuffers:(struct RenderQueue *)arg1;

@end

