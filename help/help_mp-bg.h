//  Translated to Bulgarian Language file. Used encoding: M$ CP1251

// ������� �������� �����������, �������� � ������ �� ivan@cacad.com
// ��� ��������� ������� ���� �� �� ������� �� mplayer-dev-eng maillist
// ���� patch (����� mplayer/DOC/tech/patches.txt).
// ��������� ������������� �� Vlindos Vlindos (vlidos@abv.bg) 

// ========================= MPlayer help ===========================

#ifdef HELP_MP_DEFINE_STATIC
static char* banner_text=
"\n\n"
"MPlayer " VERSION "(C) 2000-2003 MPlayer Team\n"
"\n";

static char help_text[]=
"��������:   mplayer [�����] [url | ���/]���_��_����\n"
"\n"
"������� �����: (����� manpage `man mplayer` �� ����� ������ �� ������ �����!)\n"
" -vo <drv[:dev]> ������ ����� ����� (������� � ����������) (��� '-vo help')\n"
" -ao <drv[:dev]> ������ ����� ����� (������� � ����������) (��� '-ao help')\n"
#ifdef HAVE_VCD
" vcd://<trackno>  ����� VCD (����� ������ ����) �����, ������ ����\n"
#endif
#ifdef HAVE_LIBCSS
" -dvdauth <dev>  ������ DVD ���������� �� ����������� (��� �������� �������)\n"
#endif
#ifdef USE_DVDREAD
" dvd://<titleno>  ����� DVD ��������/������� �� ������������, ������ �� ����\n"
" -alang/-slang   ������ ���� �� DVD - �����/�������� (� 2-������ ��� - 'bg')\n"
#endif
" -ss <timepos>   �������� �� ������ ������� (� ������� ��� ��:��:��)\n"
" -nosound        �������� �����\n"
" -fs -vm -zoom   ����� �� ��� ����� (����� �� ��� �����, ����� �� ������,\n" 
"                                       ��������� ��������� �� ���������)\n"
" -x <x> -y <y>   ������ ���������� �� ������ (��� ����� �� ������ ���\n" 
"                                        ��������� ��������� �� ��������� )\n"
" -sub <file>     ������ ����� ��� ����������(��� � -subfps, -subdelay)\n"
" -playlist <file> ������ ���� ��� ������ �� ����������� playlist\n"
" -vid x -aid y   ����� �� ����� �� ����� (x) � ����� (y) ����� (��� ������ ������)\n"
" -fps x -srate y ����� �� ����� �� ����� (x fps) �/��/ ����� (y Hz) ���������\n"
" -pp <��������>   ������� ������ �� ������������ ��������� �� ���������\n"\
"                 \"postprocessing\"  (��� manpage/docs �� ��������)\n"
" -framedrop      ������� ����������� ���������� �� ����� (��� ����� ������)\n"
"\n"
"������� �������: (��� manpage �� ����� ������, ������� � input.conf)\n"
" <-  or  ->      �������� ������/����� � 10 �������\n"
" up or down      �������� ������/����� � 1 ������\n"
" pgup or pgdown  �������� ������/����� � 10 ������\n"
" < or >          ������ ������/����� � ������� playlist\n"
" p or SPACE      ����� (������� ����� ������ �� �� ��������)\n"
" q or ESC        ����� � ������ �� ����������\n"
" + or -          ��������� ���������� �� ����� � +/- 0.1 �������\n"
" o               ���������� OSD ������:  none / seekbar / seekbar+timer\n"
" * or /          ��������� ��� �������� ����� (pcm volume)\n"
" z or x          ��������� ���������� �� ���������� � +/- 0.1 �������\n"
" r or t          ��������� ��������� �� ���������� ������/������,\n"
"                                            �������� -vop expand !\n"
"\n"
" * * ������� MANPAGE �� �����������, ������ (� ��-������) ����� � ������� ! * *\n"
"\n";
#endif

// ========================= MPlayer messages ===========================

// mplayer.c: 

#define MSGTR_Exiting "\n�������... (%s)\n"
#define MSGTR_Exit_quit "����"
#define MSGTR_Exit_eof "���� �� �����"
#define MSGTR_Exit_error "������� ������"
#define MSGTR_IntBySignal "\nMPlayer ��������� �� signal %d � �����: %s \n"
#define MSGTR_NoHomeDir "�� ������� HOME ����������\n"
#define MSGTR_GetpathProblem "������� � ������� get_path(\"config\") \n"
#define MSGTR_CreatingCfgFile "�������� ��������������� ����: %s\n"
#define MSGTR_InvalidVOdriver "��������� ��� �� ����� �������: %s\n��������� '-vo help' �� ������ �� ��������� ����� ��������.\n"
#define MSGTR_InvalidAOdriver "��������� ��� �� ����� �������: %s\n��������� '-ao help' �� ������ �� ��������� ����� ��������.\n"
#define MSGTR_CopyCodecsConf "(�������/������ etc/codecs.conf (�� ���� ���� �� MPlayer) � ~/.mplayer/codecs.conf)\n"
#define MSGTR_BuiltinCodecsConf "��������� ��������� codecs.conf\n"
#define MSGTR_CantLoadFont "�� ���� �� ������ �����: %s\n"
#define MSGTR_CantLoadSub "�� ���� �� ������ ��������: %s\n"
#define MSGTR_ErrorDVDkey "������ ��� ��������� �� DVD KEY (������ ���������).\n"
#define MSGTR_CmdlineDVDkey "DVD command line requested key is stored for descrambling.\n"
#define MSGTR_DVDauthOk "DVD auth sequence seems to be OK.\n"
#define MSGTR_DumpSelectedStreamMissing "dump: �������: ��������� ����� ������!\n"
#define MSGTR_CantOpenDumpfile "dump: �� ���� �� ������ ���� �� ���������!!\n"
#define MSGTR_CoreDumped "dump: ������� ��������� :)\n"
#define MSGTR_FPSnotspecified "FPS (����� � �������) � � ���������� ��� ��������� ��������! ����������� ����� -fps !\n"
#define MSGTR_TryForceAudioFmtStr "������� �� ������ ����� ������� �� ��������� ������� %s ...\n"
#define MSGTR_CantFindAfmtFallback "�� ���� �� ������ ����� ������� �� ��������� �������, ������ �� �� �������.\n"
#define MSGTR_CantFindAudioCodec "�� ���� �� ������ ������� �� ����� ������ 0x%X !\n"
#define MSGTR_TryUpgradeCodecsConfOrRTFM "*** ������ �� ������� %s � etc/codecs.conf\n*** ��� ��� ��� �� ������ ������� DOCS/codecs.html!\n"
#define MSGTR_CouldntInitAudioCodec "�� ����� �� ����� ����� ��������! -> ��������� �����\n"
#define MSGTR_TryForceVideoFmtStr "������� �� ��������� ����� ������� �� ������� %s ...\n"
#define MSGTR_CantFindVideoCodec "�� ���� �� ������ ������� ����� �� ������ � ���� ����� ������� � ����� ��� 0x%X !\n"
#define MSGTR_VOincompCodec "���������, ��������� ����� ������� � ����������� � ���� �������.\n"
#define MSGTR_CannotInitVO "�������: �� ���� �� ����� ����� ��������!\n"
#define MSGTR_CannotInitAO "�� ���� �� ������/����� ����� ���������� -> ��������� �����\n"
#define MSGTR_StartPlaying "Start playing...\n"

#define MSGTR_SystemTooSlow "\n\n"\
"         ************************************************\n"\
"         ****      ������ ������� � ������ �����     ****\n"\
"         ************************************************\n"\
"!!! �������� �������, �������� � ���������: \n"\
"- ���-��������: \"��������\" ����� �������. ���������: ������ -ao sdl ���\n"\
"  ��������� ALSA 0.5 ��� OSS �������� �� ALSA 0.9. ������� DOCS/sound.html\n"\
"  �� ��� ������!\n"\
"  ���� �� ������� ������� -autosync 30\n"\
"- ����� �����. ������� � �������� -vo �������� (�� ����� ������: -vo help)\n"\
"  ��� ������� � ����� -framedrop !  ������� DOCS/video.html �� ��� ���������.\n"\
"- ����� ��������. �� �� ������� �� ������ dvd/divx � ����� ������ �� �������\n"\
"  �� ����� ��������! �������� �������� -hardframedrop\n"\
"- �������� ����. ������ �������� ���������� �� ���� �����:\n"\
"   -nobps  -ni  -mc 0  -forceidx\n"\
"- ��� ������ �� ����� �������� (nfs/smb �����, cd, dvd, vcd � �.�.)\n"\
"  ������ � -cache 8192\n"\
"- ��������� ����� -cache ��� ���������� ������������ ���� (non-interleaved)? \n"\
"  ������ � -nocache\n"\
"��� ���� �� �������, ������� DOCS/bugreports.html !\n\n"

#define MSGTR_NoGui "MPlayer � ���������� ��� �������� ������������� ��������� (GUI) !\n"
#define MSGTR_GuiNeedsX "MPlayer � GUI ������� �������� ����� X11 !\n"
#define MSGTR_Playing "Playing %s\n"
#define MSGTR_NoSound "�����: ��� ����!!!\n"
#define MSGTR_FPSforced "������� � ����������� �� %5.3f ������ � ������� (ftime: %5.3f)\n"
#define MSGTR_CompiledWithRuntimeDetection "��������� RUNTIME CPU Detection - ��������, ���� �� � ���������! �� �� �������� ���������� ����������������, ��������������� mplayer �� ����� � ����������� ./configure --disable-runtime-cpudetection \n"
#define MSGTR_CompiledWithCPUExtensions "��������� �� x86 CPU � :"
#define MSGTR_AvailableVideoOutputPlugins "������� ����� plugin-�:\n"
#define MSGTR_AvailableVideoOutputDrivers "������� ����� ��������:\n"
#define MSGTR_AvailableAudioOutputDrivers "������� ����� ��������:\n"
#define MSGTR_AvailableAudioCodecs "������� ����� ��������:\n"
#define MSGTR_AvailableVideoCodecs "������� ����� ��������:\n"
#define MSGTR_AvailableAudioFm "\n������� ����� �������� - �������/��������:\n"
#define MSGTR_AvailableVideoFm "\n������� ����� �������� - �������/��������:\n"
#define MSGTR_UsingRTCTiming "���������� Linux's hardware RTC ������ (%ldHz)\n"
#define MSGTR_CannotReadVideoProperties "�����: �� ���� �� ������� ����������� �� ����� ������\n"
#define MSGTR_NoStreamFound "������� �� � �������\n"
#define MSGTR_InitializingAudioCodec "������ ����� �������...\n"
#define MSGTR_ErrorInitializingVODevice "������ ��� ��������/������� �� ����� �������� (-vo) !\n"
#define MSGTR_ForcedVideoCodec "������� ����� �������: %s\n"
#define MSGTR_ForcedAudioCodec "������� ����� �������: %s\n"
#define MSGTR_AODescription_AOAuthor "AO: ��������: %s\nAO: �����: %s\n"
#define MSGTR_AOComment "AO: ��������: %s\n"
#define MSGTR_Video_NoVideo "�����: ���� �����! ! !\n"
#define MSGTR_NotInitializeVOPorVO "\n�������: �� ���� �� ����� ����� �������� (-vop) ��� ����� ������ (-vo) !\n"
#define MSGTR_Paused "\n------ ����� -------\r"
#define MSGTR_PlaylistLoadUnable "\n�� ���� �� ������ ������� playlist %s\n"

// mencoder.c

#define MSGTR_MEncoderCopyright "(C) 2000-2003 Arpad Gereoffy (��� DOCS!)\n"
#define MSGTR_UsingPass3ControllFile "��������� pass3 ��������� ����: %s\n"
#define MSGTR_MissingFilename "\n������ ��� �� ����!\n\n"
#define MSGTR_CannotOpenFile_Device "�� ���� �� ������ ����/����������\n"
#define MSGTR_ErrorDVDAuth "������ ��� DVD auth...\n"
#define MSGTR_CannotOpenDemuxer "�� ���� �� ������ demuxer (�������������)\n"
#define MSGTR_NoAudioEncoderSelected "\n�� � ������� ����� ������� (-oac)! �������� ���� ��� ����������� -nosound.\n����� -oac help !\n"
#define MSGTR_NoVideoEncoderSelected "\n�� � ������� ����� ������� (-ovc)! �������� ����, ����� -ovc help !\n"
// #define MSGTR_InitializingAudioCodec "������������� ����� codec...\n"
#define MSGTR_CannotOpenOutputFile "�� ���� �� ������ ��������� ���� '%s'\n"
#define MSGTR_EncoderOpenFailed "�� ����� �� ������ �������\n"
#define MSGTR_ForcingOutputFourcc "������� fourcc ���� �� ���� %x [%.4s]\n"
#define MSGTR_WritingAVIHeader "�������� AVI header...\n"
#define MSGTR_DuplicateFrames "\n�������� %d �����(�)!!!\n"
#define MSGTR_SkipFrame "\n��������� �����!!!\n"
#define MSGTR_ErrorWritingFile "%s: ������ ��� ������ ��� �����.\n"
#define MSGTR_WritingAVIIndex "\n�������� AVI index...\n"
#define MSGTR_FixupAVIHeader "�������� AVI header...\n"
#define MSGTR_RecommendedVideoBitrate "���������������� ������� �� ����� ������ (bitrate) �� %s CD �: %d\n"
#define MSGTR_VideoStreamResult "\n����� �����: %8.3f kbit/s  (%d bps)  ��������: %d �����  %5.3f ���  %d ������\n"
#define MSGTR_AudioStreamResult "\n����� �����: %8.3f kbit/s  (%d bps)  ��������: %d �����  %5.3f ���\n"

// open.c, stream.c:
#define MSGTR_CdDevNotfound "CD-ROM ���������� '%s' �� � ��������!\n"
#define MSGTR_ErrTrackSelect "������ ��� ������ �� VCD �����!"
#define MSGTR_ReadSTDIN "�� ���� �� ����������� ���� stdin...\n"
#define MSGTR_UnableOpenURL "�� ���� �� ������ URL �����: %s\n"
#define MSGTR_ConnToServer "��������� ������ ��� ������: %s\n"
#define MSGTR_FileNotFound "�� ������� ����: '%s'\n"

#define MSGTR_SMBInitError "�� ���� �� ����� libsmbclient : %d\n"
#define MSGTR_SMBFileNotFound "�� ���� �� ������ ����� �� �������: '%s'\n"
#define MSGTR_SMBNotCompiled "MPlayer �� � ���������� � ��������� �� SMB �����\n"

#define MSGTR_CantOpenDVD "�� ���� �� ������ DVD ����������: %s\n"
#define MSGTR_DVDwait "���� ������������ �� DVD �����, ���� ���������...\n"
#define MSGTR_DVDnumTitles "��� %d �������� �� ���� DVD.\n"
#define MSGTR_DVDinvalidTitle "���������� �� DVD ��� ��������� ����� : %d\n"
#define MSGTR_DVDnumChapters "��� %d ������ � ���� DVD ��������.\n"
#define MSGTR_DVDinvalidChapter "�������� �� DVD ��� ��������� �����: %d\n"
#define MSGTR_DVDnumAngles "��� %d ������ ����� � ���� DVD ��������.\n"
#define MSGTR_DVDinvalidAngle "������ ����� �� DVD � ��������� �����: %d\n"
#define MSGTR_DVDnoIFO "�� ���� �� ������ IFO ����� �� ���� DVD �������� %d.\n"
#define MSGTR_DVDnoVOBs "�� ���� �� ������ ���� ��������, ������ ��� VTS_%02d_1.VOB.\n"
#define MSGTR_DVDopenOk "DVD �������� �������!\n"

// demuxer.c, demux_*.c:
#define MSGTR_AudioStreamRedefined "��������! Audio stream header %d redefined!\n"
#define MSGTR_VideoStreamRedefined "��������! Video stream header %d redefined!\n"
#define MSGTR_TooManyAudioInBuffer "\nDEMUXER: ������ ����� (%d � %d �����) ����� ������ � ������!\n"
#define MSGTR_TooManyVideoInBuffer "\nDEMUXER: ������ ����� (%d � %d �����) ����� ������ � ������!\n"
#define MSGTR_MaybeNI "(���� �� ������� ���������� ������������ (non-interleaved) �����/���� ���\n"\
                      " ��������� �� ����)?\n" \
		      "��� .AVI ����, ������ �� ������� non-interleaved ����� � ����� -ni\n"
#define MSGTR_SwitchToNi "\n������ � ���������� ������������ .AVI - ����������� �������� ����� -ni !\n"
#define MSGTR_Detected_XXX_FileFormat "������� ������ ������ %s!\n"
#define MSGTR_DetectedAudiofile "������� ����� ����!\n"
#define MSGTR_NotSystemStream "�������� �� � MPEG System Stream ... (���� �� � Transport Stream ?)\n"
#define MSGTR_InvalidMPEGES "��������� MPEG-ES �����??? �������� �� � ������, ���� �� � ��� :(\n"
#define MSGTR_FormatNotRecognized \
"============= ���������, ���� ������ ������ �� � ���������/��������� ===============\n"\
"=====    ��� ���� ���� � AVI, ASF ��� MPEG �����, ���� �������� �� � ������!   =====\n"
#define MSGTR_MissingVideoStream "�� ������� ����� �����!\n"
#define MSGTR_MissingAudioStream "�� ������� ����� �����...  -> ��������� �����\n"
#define MSGTR_MissingVideoStreamBug "������ ����� �����!? �������� �� � ������, ���� �� � ��� :(\n"

#define MSGTR_DoesntContainSelectedStream "demux: ������ �� ������� ���������� ����� ��� ����� �����\n"

#define MSGTR_NI_Forced "������� �"
#define MSGTR_NI_Detected "������ �"
#define MSGTR_NI_Message "%s ���������� ������������ AVI ������ ������!\n"

#define MSGTR_UsingNINI "��������� ���������� ������������ - �������� AVI ������ ������!\n"
#define MSGTR_CouldntDetFNo "�� ���� �� �������� ���� �� ������� (�� ��������� ����������)\n"
#define MSGTR_CantSeekRawAVI "�� ���� �� ��������� ��� `������` .AVI ������! (��������� � ������, ������ � ����� -idx !)\n"
#define MSGTR_CantSeekFile "�� ���� ��������� � ���� ����!\n"

#define MSGTR_EncryptedVOB "������� VOB ���� (����������� � ��� libcss ����������)! ������� DOCS/cd-dvd.html\n"
#define MSGTR_EncryptedVOBauth "������� VOB �����, �� ��� �� ��� �������� authentication!!\n"

#define MSGTR_MOVcomprhdr "MOV: Compressed headers (������) �� �� ���������!\n"
#define MSGTR_MOVvariableFourCC "MOV: ��������! ������� ��������� FOURCC ���!?\n"
#define MSGTR_MOVtooManyTrk "MOV: ��������! ������ ����� �������!"
#define MSGTR_FoundAudioStream "==> ������� ����� �����: %d\n"
#define MSGTR_FoundVideoStream "==> ������� ����� �����: %d\n"
#define MSGTR_DetectedTV "������� � TV! ;-)\n"
#define MSGTR_ErrorOpeningOGGDemuxer "�� ���� �� ������ ogg demuxer\n"
#define MSGTR_ASFSearchingForAudioStream "ASF: ����� ����� ����� (id:%d)\n"
#define MSGTR_CannotOpenAudioStream "�� ���� �� ������ ����� �����: %s\n"
#define MSGTR_CannotOpenSubtitlesStream "�� ���� �� ������ ����� ��� ��������: %s\n"
#define MSGTR_OpeningAudioDemuxerFailed "�� ����� �� ������ ����� demuxer: %s\n"
#define MSGTR_OpeningSubtitlesDemuxerFailed "�� ����� �� ������ demuxer �� ����������: %s\n"
#define MSGTR_TVInputNotSeekable "�� ���� �� �� �������� ��� TV ! (���� �� �� �� �������� �� ����� �� �������� ;)\n"
#define MSGTR_DemuxerInfoAlreadyPresent "������������ �� demuxer-� %s � ���� ��������!\n"
#define MSGTR_ClipInfo "���������� �� �������: \n"

// dec_video.c & dec_audio.c:
#define MSGTR_CantOpenCodec "�� ���� �� ������ ��������\n"
#define MSGTR_CantCloseCodec "�� ���� �� ������� ��������\n"

#define MSGTR_MissingDLLcodec "������: �� ���� �� ������ DirectShow �������: %s\n"
#define MSGTR_ACMiniterror "�� ���� �� ������/����� Win32/ACM AUDIO ������� (��� ������ DLL ������������?)\n"
#define MSGTR_MissingLAVCcodec "�� ���� �� ������ ������� '%s' � ���������� libavcodec...\n"

#define MSGTR_MpegNoSequHdr "MPEG: �������: EOF (����_��_�����) ������ ������ sequence header\n"
#define MSGTR_CannotReadMpegSequHdr "MPEG: �������: �� ���� �� ������� sequence header!\n"
#define MSGTR_CannotReadMpegSequHdrEx "MPEG: �������: �� ���� �� ������� sequence header extension!\n"
#define MSGTR_BadMpegSequHdr "MPEG: ��� sequence header!\n"
#define MSGTR_BadMpegSequHdrEx "MPEG: ��� sequence header extension!\n"

#define MSGTR_ShMemAllocFail "�� ���� �� ������ ��������� �����\n"
#define MSGTR_CantAllocAudioBuf "�� ���� �� ������ ����� �����\n"
#define MSGTR_NoMemForDecodedImage "���� ���������� ����� �� ������ �� ������������ ����������� (%ld �����)\n"

#define MSGTR_UnknownAudio "��������/������� ����� ������ -> ��������� �����\n"

#define MSGTR_UsingExternalPP "[PP] ��������� �������� postprocessing ������, ���������� �������� q = %d\n"
#define MSGTR_UsingCodecPP "[PP] ��������� postprocessing �� ��������, ���������� �������� q = %d\n"
#define MSGTR_VideoAttributeNotSupportedByVO_VD "����� ��������� '%s' �� �� �������� �� �������� vo & vd! \n"
#define MSGTR_VideoCodecFamilyNotAvailableStr "���������� ������� �� ����� ������� [%s] (vfm=%s) �� � ��������\n (�������� � �� ����� �� ����������!)\n"
#define MSGTR_AudioCodecFamilyNotAvailableStr "���������� ������� �� ����� ������� [%s] (afm=%s) �� � ��������\n (�������� � �� ����� �� ����������!)\n"
#define MSGTR_OpeningVideoDecoder "������� ����� �������: [%s] %s\n"
#define MSGTR_OpeningAudioDecoder "������� ����� �������: [%s] %s\n"
#define MSGTR_UninitVideoStr "������ �����: %s  \n"
#define MSGTR_UninitAudioStr "������ �����: %s  \n"
#define MSGTR_VDecoderInitFailed "VDecoder ������ ��� ������� :(\n"
#define MSGTR_ADecoderInitFailed "ADecoder ������ ��� ������� :(\n"
#define MSGTR_ADecoderPreinitFailed "ADecoder ������ ��� ������������� ������� (preinit) :(\n"
#define MSGTR_AllocatingBytesForInputBuffer "dec_audio: ������� %d ����� �� ������ �����\n"
#define MSGTR_AllocatingBytesForOutputBuffer "dec_audio: ������� %d + %d = %d ����� �� ������� �����\n"

// LIRC:
#define MSGTR_SettingUpLIRC "������������ �� LIRC ���������...\n"
#define MSGTR_LIRCdisabled "��� ���� �� ������ �� ���������� ������ ������������ ����������\n"
#define MSGTR_LIRCopenfailed "������ ��� ��������� �� LIRC �����������!\n"
#define MSGTR_LIRCcfgerr "������ ��� ������ �������������� �� LIRC �� %s !\n"

// vf.c 
#define MSGTR_CouldNotFindVideoFilter "�� ���� �� ������ ����� ������ '%s'\n"
#define MSGTR_CouldNotOpenVideoFilter "�� ���� �� ������ ����� ������ '%s'\n"
#define MSGTR_OpeningVideoFilter "������� ����� ������: "
#define MSGTR_CannotFindColorspace "�� ���� �� ������ ��� ������� �����, ���� ���� ��������� �� ������ 'scale' :(\n"

// vd.c
#define MSGTR_CodecDidNotSet "VDec: ��������� �� � ��������� sh->disp_w � sh->disp_h, ������� �� �� ������!\n"
#define MSGTR_VoConfigRequest "VDec: vo config ������� - %d x %d (������� ����� - csp: %s)\n"
#define MSGTR_CouldNotFindColorspace "�� ���� �� ������ ��� ������� ����� - ������� ��� � -vop scale...\n"
#define MSGTR_MovieAspectIsSet "Movie-Aspect � %.2f:1 - ����������� �� ���������� �����������.\n"
#define MSGTR_MovieAspectUndefined "Movie-Aspect � ����������� - �������� �������������.\n"

// ====================== GUI messages/buttons ========================

#ifdef HAVE_NEW_GUI

// --- labels ---
#define MSGTR_About "�� MPlayer ..."
#define MSGTR_FileSelect "���� ..."
#define MSGTR_SubtitleSelect "�������� ..."
#define MSGTR_OtherSelect "����� ..."
#define MSGTR_AudioFileSelect "������ ����� ���� ..."
#define MSGTR_FontSelect "����� ..."
#define MSGTR_PlayList "PlayList"
#define MSGTR_Equalizer "����������"
#define MSGTR_SkinBrowser "����� �� ����"
#define MSGTR_Network "������� ����� ..."
#define MSGTR_Preferences "���������"
#define MSGTR_OSSPreferences "������������ �� OSS ��������"
#define MSGTR_NoMediaOpened "no media opened"
#define MSGTR_VCDTrack "VCD ����� %d"
#define MSGTR_NoChapter "���� �����"
#define MSGTR_Chapter "����� %d"
#define MSGTR_NoFileLoaded "���� ������� ����"

// --- buttons ---
#define MSGTR_Ok "Ok"
#define MSGTR_Cancel "�����"
#define MSGTR_Add "������"
#define MSGTR_Remove "�����"
#define MSGTR_Clear "�������"
#define MSGTR_Config "������������"
#define MSGTR_ConfigDriver "������������ ��������"
#define MSGTR_Browse "������"

// --- error messages ---
#define MSGTR_NEMDB "���������, ���� ���������� ����� �� draw buffer."
#define MSGTR_NEMFMR "���������, ���� ���������� ����� �� menu rendering."
#define MSGTR_IDFGCVD "���������, �� ���� �� ������ ����� ������� ��������� � ���� GUI."
#define MSGTR_NEEDLAVCFAME "���������, �� ������ �� ������� ������� ����� �� �� MPEG �� \n������ DXR3/H+ ���������� ��� �� ����������� �������.\n���� �������� LAVC ��� FAME � �������������� �� DXR3/H+ ��������."

// --- skin loader error messages
#define MSGTR_SKIN_ERRORMESSAGE "[skin] ������ � ���������������� ���� �� ������ � ��� %d: %s" 
#define MSGTR_SKIN_WARNING1 "[skin] �������������� � ���������������� ���� �� ������ � ��� %d:\n ������� widget, ����� �� ���� � \"section\" - ( %s )"
#define MSGTR_SKIN_WARNING2 "[skin] �������������� � ���������������� ���� �� ������ � ��� %d:\n ������� widget, ����� �� ���� � \"subsection\" - ( %s )"
#define MSGTR_SKIN_BITMAP_16bit "Bitmap � 16 � ��-����� ���� �� ���� �� �� �������� ( %s ).\n"
#define MSGTR_SKIN_BITMAP_FileNotFound "������ ������ ( %s )\n"
#define MSGTR_SKIN_BITMAP_BMPReadError "bmp ������ ��� ������ ( %s )\n"
#define MSGTR_SKIN_BITMAP_TGAReadError "tga ������ ��� ������ ( %s )\n"
#define MSGTR_SKIN_BITMAP_PNGReadError "png ������ ��� ������ ( %s )\n"
#define MSGTR_SKIN_BITMAP_RLENotSupported "TGA � RLE ��������� �� �� �������� ( %s )\n"
#define MSGTR_SKIN_BITMAP_UnknownFileType "���������� ��� �� ����� ( %s )\n"
#define MSGTR_SKIN_BITMAP_ConvertError "������ ��� ����������� �� 24 ���� ��� 32 ���� ( %s )\n"
#define MSGTR_SKIN_BITMAP_UnknownMessage "���������� ���������: %s\n"
#define MSGTR_SKIN_FONT_NotEnoughtMemory "���� ���������� �����\n"
#define MSGTR_SKIN_FONT_TooManyFontsDeclared "����������� �� ������ ����� ��������\n"
#define MSGTR_SKIN_FONT_FontFileNotFound "������ �� ������ �� � �������\n"
#define MSGTR_SKIN_FONT_FontImageNotFound "������ � ������������� �� ������ �� � �������\n"
#define MSGTR_SKIN_FONT_NonExistentFontID "������������� ������������� �� ����� ( %s )\n"
#define MSGTR_SKIN_UnknownParameter "���������� ��������� ( %s )\n"
#define MSGTR_SKINBROWSER_NotEnoughMemory "[skinbrowser] �������� �� �����.\n"
#define MSGTR_SKIN_SKINCFG_SkinNotFound "�� ������� ������ ( %s ).\n"
#define MSGTR_SKIN_SKINCFG_SkinCfgReadError "������ ��� ������ �� ���������������� ���� �� ������ ( %s ).\n"
#define MSGTR_SKIN_LABEL "����:"

// --- gtk menus
#define MSGTR_MENU_AboutMPlayer "�� MPlayer"
#define MSGTR_MENU_Open "������ ..."
#define MSGTR_MENU_PlayFile "���� ..."
#define MSGTR_MENU_PlayVCD "VCD ..."
#define MSGTR_MENU_PlayDVD "DVD ..."
#define MSGTR_MENU_PlayURL "URL ..."
#define MSGTR_MENU_LoadSubtitle "�������� ..."
#define MSGTR_MENU_DropSubtitle "������ ��������"
#define MSGTR_MENU_LoadExternAudioFile "������ ����� ���� ..."
#define MSGTR_MENU_Playing "��������"
#define MSGTR_MENU_Play "�����"
#define MSGTR_MENU_Pause "�����"
#define MSGTR_MENU_Stop "����"
#define MSGTR_MENU_NextStream "�������"
#define MSGTR_MENU_PrevStream "��������"
#define MSGTR_MENU_Size "������"
#define MSGTR_MENU_NormalSize "�������� ������"
#define MSGTR_MENU_DoubleSize "����� ������"
#define MSGTR_MENU_FullScreen "��� �����"
#define MSGTR_MENU_DVD "DVD"
#define MSGTR_MENU_VCD "VCD"
#define MSGTR_MENU_PlayDisc "����� ���� ..."
#define MSGTR_MENU_ShowDVDMenu "������ DVD ����"
#define MSGTR_MENU_Titles "��������"
#define MSGTR_MENU_Title "�������� %2d"
#define MSGTR_MENU_None "(����)"
#define MSGTR_MENU_Chapters "�����"
#define MSGTR_MENU_Chapter "����� %2d"
#define MSGTR_MENU_AudioLanguages "���� �� �������"
#define MSGTR_MENU_SubtitleLanguages "���� �� ����������"
#define MSGTR_MENU_PlayList "Playlist"
#define MSGTR_MENU_SkinBrowser "����� �� ����"
#define MSGTR_MENU_Preferences "���������"
#define MSGTR_MENU_Exit "����� ..."
#define MSGTR_MENU_Mute "�������"
#define MSGTR_MENU_Original "�����������"
#define MSGTR_MENU_AspectRatio "�����������"
#define MSGTR_MENU_AudioTrack "����� �����"
#define MSGTR_MENU_Track "����� %d"
#define MSGTR_MENU_VideoTrack "����� �����"

// --- equalizer
#define MSGTR_EQU_Audio "�����"
#define MSGTR_EQU_Video "�����"
#define MSGTR_EQU_Contrast "��������: "
#define MSGTR_EQU_Brightness "�����������: "
#define MSGTR_EQU_Hue "������� ���: "
#define MSGTR_EQU_Saturation "������� ��������: "
#define MSGTR_EQU_Front_Left "������ ���"
#define MSGTR_EQU_Front_Right "������ �����"
#define MSGTR_EQU_Back_Left "����� ���"
#define MSGTR_EQU_Back_Right "����� �����"
#define MSGTR_EQU_Center "������"
#define MSGTR_EQU_Bass "���"
#define MSGTR_EQU_All "������"

// --- playlist
#define MSGTR_PLAYLIST_Path "���"
#define MSGTR_PLAYLIST_Selected "������� �������"
#define MSGTR_PLAYLIST_Files "�������"
#define MSGTR_PLAYLIST_DirectoryTree "����������"

// --- preferences
#define MSGTR_PREFERENCES_Audio "�����"
#define MSGTR_PREFERENCES_Video "�����"
#define MSGTR_PREFERENCES_SubtitleOSD "�������� & OSD"
#define MSGTR_PREFERENCES_Misc "�����"

#define MSGTR_PREFERENCES_None "����"
#define MSGTR_PREFERENCES_AvailableDrivers "������� ��������:"
#define MSGTR_PREFERENCES_DoNotPlaySound "��� ����"
#define MSGTR_PREFERENCES_NormalizeSound "����������� ������ �� �����"
#define MSGTR_PREFERENCES_EnEqualizer "������ ����������"
#define MSGTR_PREFERENCES_ExtraStereo "������ ������������ ������"
#define MSGTR_PREFERENCES_Coefficient "����������:"
#define MSGTR_PREFERENCES_AudioDelay "����������:"
#define MSGTR_PREFERENCES_DoubleBuffer "������ ������ ����������"
#define MSGTR_PREFERENCES_DirectRender "������ �������� �������"
#define MSGTR_PREFERENCES_FrameDrop "������ ���������� �� �����"
#define MSGTR_PREFERENCES_HFrameDrop "������ ����� ���������� �� �����( ������ )"
#define MSGTR_PREFERENCES_Flip "������ ������������� ������-������"
#define MSGTR_PREFERENCES_Panscan "Panscan: "
#define MSGTR_PREFERENCES_OSDTimer "�������� � ��������"
#define MSGTR_PREFERENCES_OSDProgress "���� �������� ��������"
#define MSGTR_PREFERENCES_Subtitle "��������:"
#define MSGTR_PREFERENCES_SUB_Delay "����������: "
#define MSGTR_PREFERENCES_SUB_FPS "FPS:"
#define MSGTR_PREFERENCES_SUB_POS "��������������: "
#define MSGTR_PREFERENCES_SUB_AutoLoad "������� ����������� ������� �� ��������"
#define MSGTR_PREFERENCES_SUB_Unicode "������� �� � Unicode ���������"
#define MSGTR_PREFERENCES_SUB_MPSUB "������������ ���������� � �������� MPlayer ������"
#define MSGTR_PREFERENCES_SUB_SRT "������������ ���������� � SubViewer( SRT ) ������"
#define MSGTR_PREFERENCES_Font "�����:"
#define MSGTR_PREFERENCES_FontFactor "�������� �� �������:"
#define MSGTR_PREFERENCES_PostProcess "������ ������������ ��������� �� ��������� (postprocess)"
#define MSGTR_PREFERENCES_AutoQuality "����������� ���������� �� ����������: "
#define MSGTR_PREFERENCES_NI "�������� ������ AVI ���� ���������� ������������� ( -ni )"
#define MSGTR_PREFERENCES_IDX "������ ���� �������� ������� (index table) ��� ������������ (-idx)"
#define MSGTR_PREFERENCES_VideoCodecFamily "������������ ������� �� ����� �������:"
#define MSGTR_PREFERENCES_AudioCodecFamily "������������ ������� �� ����� �������:"
#define MSGTR_PREFERENCES_FRAME_OSD_Level "OSD ������"
#define MSGTR_PREFERENCES_FRAME_Subtitle "��������"
#define MSGTR_PREFERENCES_FRAME_Font "�����"
#define MSGTR_PREFERENCES_FRAME_PostProcess "Postprocess"
#define MSGTR_PREFERENCES_FRAME_CodecDemuxer "Codec & demuxer"
#define MSGTR_PREFERENCES_FRAME_Cache "Cache"
#define MSGTR_PREFERENCES_FRAME_Misc "�����"
#define MSGTR_PREFERENCES_OSS_Device "Device:"
#define MSGTR_PREFERENCES_OSS_Mixer "Mixer:"
#define MSGTR_PREFERENCES_Message "�� ����������, �� ����� ����� ������� � ���� �� ��������� ����."
#define MSGTR_PREFERENCES_DXR3_VENC "����� �������:"
#define MSGTR_PREFERENCES_DXR3_LAVC "LAVC (ffmpeg)"
#define MSGTR_PREFERENCES_DXR3_FAME "FAME"
#define MSGTR_PREFERENCES_FontEncoding1 "Unicode"
#define MSGTR_PREFERENCES_FontEncoding2 "Western European Languages (ISO-8859-1)"
#define MSGTR_PREFERENCES_FontEncoding3 "Western European Languages with Euro (ISO-8859-15)"
#define MSGTR_PREFERENCES_FontEncoding4 "Slavic/Central European Languages (ISO-8859-2)"
#define MSGTR_PREFERENCES_FontEncoding5 "Esperanto, Galician, Maltese, Turkish (ISO-8859-3)"
#define MSGTR_PREFERENCES_FontEncoding6 "Old Baltic charset (ISO-8859-4)"
#define MSGTR_PREFERENCES_FontEncoding7 "Cyrillic (ISO-8859-5)"
#define MSGTR_PREFERENCES_FontEncoding8 "Arabic (ISO-8859-6)"
#define MSGTR_PREFERENCES_FontEncoding9 "Modern Greek (ISO-8859-7)"
#define MSGTR_PREFERENCES_FontEncoding10 "Turkish (ISO-8859-9)"
#define MSGTR_PREFERENCES_FontEncoding11 "Baltic (ISO-8859-13)"
#define MSGTR_PREFERENCES_FontEncoding12 "Celtic (ISO-8859-14)"
#define MSGTR_PREFERENCES_FontEncoding13 "Hebrew charsets (ISO-8859-8)"
#define MSGTR_PREFERENCES_FontEncoding14 "Russian (KOI8-R)"
#define MSGTR_PREFERENCES_FontEncoding15 "Ukrainian, Belarusian (KOI8-U/RU)"
#define MSGTR_PREFERENCES_FontEncoding16 "Simplified Chinese charset (CP936)"
#define MSGTR_PREFERENCES_FontEncoding17 "Traditional Chinese charset (BIG5)"
#define MSGTR_PREFERENCES_FontEncoding18 "Japanese charsets (SHIFT-JIS)"
#define MSGTR_PREFERENCES_FontEncoding19 "Korean charset (CP949)"
#define MSGTR_PREFERENCES_FontEncoding20 "Thai charset (CP874)"
#define MSGTR_PREFERENCES_FontEncoding21 "Cyrillic Windows (CP1251)"
#define MSGTR_PREFERENCES_FontNoAutoScale "��� ����������� ����������"
#define MSGTR_PREFERENCES_FontPropWidth    "�������������� �� ��������� �� ������"
#define MSGTR_PREFERENCES_FontPropHeight   "�������������� �� ���������� �� ������"
#define MSGTR_PREFERENCES_FontPropDiagonal "�������������� �� ��������� �� ������"
#define MSGTR_PREFERENCES_FontEncoding "������� �������:"
#define MSGTR_PREFERENCES_FontBlur    "���������� �� �������:"
#define MSGTR_PREFERENCES_FontOutLine "�������� �� �������:"
#define MSGTR_PREFERENCES_FontTextScale "����� �� ������:"
#define MSGTR_PREFERENCES_FontOSDScale "����� �� OSD:"
#define MSGTR_PREFERENCES_Cache "�������� �� ������� �����"
#define MSGTR_PREFERENCES_LoadFullscreen "����� �� ��� �����"
#define MSGTR_PREFERENCES_CacheSize "�������� �� ����: "
#define MSGTR_PREFERENCES_XSCREENSAVER "������� XScreenSaver"
#define MSGTR_PREFERENCES_AutoSync "��������� ������������� (��� ������ ������� �����) "
#define MSGTR_PREFERENCES_AutoSyncValue "������ �� Autosync:"

// --- messagebox
#define MSGTR_MSGBOX_LABEL_FatalError "������� ������ ..."
#define MSGTR_MSGBOX_LABEL_Error "������ ..."
#define MSGTR_MSGBOX_LABEL_Warning "�������� ..." 

#endif
