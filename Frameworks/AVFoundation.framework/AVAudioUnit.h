/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSString;

@interface AVAudioUnit : AVAudioNode {
}

@property(readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } audioComponentDescription;
@property(readonly) struct OpaqueAudioComponentInstance { }* audioUnit;
@property(readonly) NSString * manufacturerName;
@property(readonly) NSString * name;
@property(readonly) unsigned int version;

- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })audioComponentDescription;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (BOOL)loadAudioUnitPresetAtURL:(id)arg1 error:(id*)arg2;
- (id)manufacturerName;
- (id)name;
- (bool)setValue:(float)arg1 forParam:(unsigned long)arg2;
- (float)valueForParam:(unsigned long)arg1;
- (unsigned int)version;

@end
