/// GENERATED BY testcase_gen. DO NOT MODIFY BY HAND.

// ignore_for_file: deprecated_member_use,constant_identifier_names

import 'package:agora_rtc_engine/agora_rtc_engine.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:flutter/foundation.dart';
import 'package:fake_test_app/main.dart' as app;
import 'package:iris_tester/iris_tester.dart';
import 'package:agora_rtc_engine/src/impl/api_caller.dart';

void musicContentCenterSmokeTestCases() {
  testWidgets(
    'initialize',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        const String configurationAppId = "hello";
        const String configurationRtmToken = "hello";
        const int configurationMccUid = 10;
        const MusicContentCenterConfiguration configuration =
            MusicContentCenterConfiguration(
          appId: configurationAppId,
          rtmToken: configurationRtmToken,
          mccUid: configurationMccUid,
        );
        await musicContentCenter.initialize(
          configuration,
        );
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint('[initialize] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );

  testWidgets(
    'release',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        await musicContentCenter.release();
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint('[release] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );

  testWidgets(
    'registerEventHandler',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        final MusicContentCenterEventHandler eventHandler =
            MusicContentCenterEventHandler(
          onMusicChartsResult: (String requestId,
              MusicContentCenterStatusCode status, List result) {},
          onMusicCollectionResult: (String requestId,
              MusicContentCenterStatusCode status, MusicCollection result) {},
          onLyricResult: (String requestId, String lyricUrl) {},
          onPreLoadEvent: (int songCode, int percent, PreloadStatusCode status,
              String msg, String lyricUrl) {},
        );
        musicContentCenter.registerEventHandler(
          eventHandler,
        );
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint('[registerEventHandler] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );

  testWidgets(
    'unregisterEventHandler',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        musicContentCenter.unregisterEventHandler();
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint('[unregisterEventHandler] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );

  testWidgets(
    'getMusicCharts',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        await musicContentCenter.getMusicCharts();
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint('[getMusicCharts] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );

  testWidgets(
    'getMusicCollectionByMusicChartId',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        const int musicChartId = 10;
        const int page = 10;
        const int pageSize = 10;
        const String jsonOption = "hello";
        await musicContentCenter.getMusicCollectionByMusicChartId(
          musicChartId: musicChartId,
          page: page,
          pageSize: pageSize,
          jsonOption: jsonOption,
        );
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint(
              '[getMusicCollectionByMusicChartId] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );

  testWidgets(
    'searchMusic',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        const String keyWord = "hello";
        const int page = 10;
        const int pageSize = 10;
        const String jsonOption = "hello";
        await musicContentCenter.searchMusic(
          keyWord: keyWord,
          page: page,
          pageSize: pageSize,
          jsonOption: jsonOption,
        );
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint('[searchMusic] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );

  testWidgets(
    'preload',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        const int songCode = 10;
        const String jsonOption = "hello";
        await musicContentCenter.preload(
          songCode: songCode,
          jsonOption: jsonOption,
        );
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint('[preload] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );

  testWidgets(
    'isPreloaded',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        const int songCode = 10;
        await musicContentCenter.isPreloaded(
          songCode,
        );
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint('[isPreloaded] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );

  testWidgets(
    'getLyric',
    (WidgetTester tester) async {
      final irisTester = IrisTester();
      final debugApiEngineIntPtr = irisTester.createDebugApiEngine();
      setMockIrisApiEngineIntPtr(debugApiEngineIntPtr);

      String engineAppId = const String.fromEnvironment('TEST_APP_ID',
          defaultValue: '<YOUR_APP_ID>');

      RtcEngine rtcEngine = createAgoraRtcEngine();
      await rtcEngine.initialize(RtcEngineContext(
        appId: engineAppId,
        areaCode: AreaCode.areaCodeGlob.value(),
      ));

      final musicContentCenter = rtcEngine.getMusicContentCenter();

      try {
        const int songCode = 10;
        const int lyricType = 10;
        await musicContentCenter.getLyric(
          songCode: songCode,
          lyricType: lyricType,
        );
      } catch (e) {
        if (e is! AgoraRtcException) {
          debugPrint('[getLyric] error: ${e.toString()}');
          rethrow;
        }

        if (e.code != -4) {
          // Only not supported error supported.
          rethrow;
        }
      }

      await musicContentCenter.release();
      await rtcEngine.release();
    },
//  skip: !(),
  );
}
