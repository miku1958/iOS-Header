//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/AudioComponentPreferenceProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol>
{
    struct AudioComponentRegistrarImpl *mImpl;
    struct ConnectionInfo mConnInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getComponentUserTags:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getExtensionComponentList:(id)arg1 linkedSDKRequiresEntitlement:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getExtensionIcon:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getInterAppIcon:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithRegistrar:(struct AudioComponentRegistrarImpl *)arg1 connection:(id)arg2;
- (void)setComponentUserTags:(id)arg1 tags:(id)arg2;
- (void)setExtensionComponentList:(id)arg1 linkedSDKRequiresEntitlement:(BOOL)arg2 components:(id)arg3 reply:(CDUnknownBlockType)arg4;

@end

